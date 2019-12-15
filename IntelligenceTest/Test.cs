﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IntelligenceTest
{
    public class Test
    {
        public List<Question> Questions;       
        public Test()
            
        {
            Questions = new List<Question>();

            Questions.Add( new Question("Собака-3, кошка-3, ослик-2, рыбка-0. Чему равняется петушок?", new string[]
           { "20", "10", "0", "40", "50" }, 0));

            Questions.Add(new Question("Шёл муж с женой, брат с сестрой да шурин с зятем. Сколько всех?", new string[]
           { "2", "3", "4", "5", "6" }, 1));

            Questions.Add( new Question(" У человека - 1, у коровы - 2, у ястреба - 0... А сколько этого у сороконожки?", new string[]
           { "0", "1", "2", "3", "4" }, 4));

            Questions.Add(new Question("Продолжите ряд: р д т ч п ш с", new string[]
           { "з", "м", "в", "к", "у" }, 2));
            //Перед вами первые буквы счёта (Раз, Два, Три, Четыре, Пять, Шесть, Семь…). Получается, что следующая буква будет В (Восемь).

            Questions.Add(new Question("На каком языке говорят молча? ", new string[]
           { "Язык жестов", "Язык любви", "Язык боли", "Язык амэрыканский", "C#" }, 0));

            Questions.Add(new Question("Мальчик заплатил за бутылку с пробкой 11 рублей. Бутылка стоит на 10 рублей больше, чем пробка. Сколько стоит пробка?", new string[]
           { "1 рубль", "2 рубля", "50 копеек", "Бесценно", "Бесплатно" }, 2));

            Questions.Add(new Question("По чему ходят часто, а ездят редко? ", new string[]
           { "По дереву", "По траве", "По нервам", "По голове", "По лестнице" }, 4));

            Questions.Add(new Question("Летели галки, сели на палки. Сядут по одной — галка лишняя, сядут по две — палка лишняя. Сколько было палок и сколько было галок? ", new string[]
           { "2 палки и 4 галки", "3 палки и 2 галки", "2 палки и 2 галки", "3 палки и 4 галки", "1 палка и 1 галка" }, 3));

            Questions.Add(new Question("Ничего не пишите и не используйте калькулятор. Возьмите 1000. Прибавьте 40. Прибавьте еще тысячу. Прибавьте 30. Еще 1000. Плюс 20. Плюс 1000. И плюс 10. Что получилось?", new string[]
           { "4100", "4500", "4500", "5000", "5500" }, 0));

            Questions.Add(new Question("Два пятиклассника Петя и Алёнка идут со школы и разговаривают. " +
                "— Когда послезавтра станет вчера, — сказал один из них, — то сегодня будет так же далеко от воскресенья, как и тот день, который был сегодня, когда позавчера было завтра.В какой день недели они разговаривали ? ", new string[]
           { "Понедельник", "Среда", "Пятница", "Суббота", "Воскресенье" }, 4));

            Questions.Add(new Question("На столе лежит 100 листов бумаги. За каждые 10 секунд можно посчитать 10 листов.Сколько секунд понадобится, чтобы посчитать 80 листов ? ", new string[]
           { "80", "60", "8", "10", "20" }, 4));

            //1 нога (ковбой кладет ноги на стол, джентльмен кладет ногу на ногу,а йог медитирует)
            Questions.Add(new Question("За столом сидят ковбой, джентльмен и йог. Сколько ног стоит на полу? ", new string[]
           { "1", "2", "4", "6", "0" }, 0));

            //Шерлок Холмс (вымышленный персонаж)
            Questions.Add(new Question("Джордж Вашингтон, Шерлок Холмс, Вильям Шекспир, Людвиг Ван Бетховен, Наполеон Бонапарт, Нерон — кто «лишний» в этом списке? ", new string[]
           { "Джордж Вашингтон", "Шерлок Холмс", "Вильям Шекспир", "Людвиг Ван Бетховен", "Наполеон Бонапарт" }, 1));

            Questions.Add(new Question("Сколько лет длилась «Столетняя война»? ", new string[]
           { "100", "112", "116", "124", "102" }, 2));

            Questions.Add(new Question("Заходишь в комнату: в комнате на кровати лежит 2 пёсика, 4 котика, стоит жираф и 5 бегемотиков, летает 3 курицы и сидит 1 гусь маленький-маленький. Сколько ног в комнате? ", new string[]
           { "2", "24", "0", "30", "28" }, 0));

            Questions.Add(new Question("6 ног, 2 руки, 2 тела, 2 головы, 1 хвост? ", new string[]
           { "Всадник на коне", "Мутант", "Гидра", "Франкенштейн", "Глюки" }, 1));

            //Только один, потом 6 уже будет вычитаться из 24 
            Questions.Add(new Question("Сколько раз можно вычесть 6 из 30? ", new string[]
           { "1", "6", "3", "2", "Бесконечно" }, 0));

            //Три (апельсины же ваши)
            Questions.Add(new Question("У вас есть три апельсина. Если один апельсин вы спрячете, то сколько апельсинов у вас останется? ", new string[]
           { "1", "2", "3", "0", "4" }, 2));

            Questions.Add(new Question("Две матери, две дочери и бабушка с внучкой. Сколько всех? ", new string[]
           { "6", "5", "4", "3", "2" }, 4));

            Questions.Add(new Question("Летела стая гусей. Один гусь впереди и два позади. Один позади и два впереди, один между двумя и три в ряд. Сколько их было?", new string[]
           { "3", "6", "9", "12", "0" }, 0));

            Questions.Add(new Question("У квадратного стола отпилили один угол. Сколько теперь углов у него стало? ", new string[]
           { "4", "5", "6", "3", "0" }, 1));

            Questions.Add(new Question("Если пять кошек ловят пять мышей за пять минут, то сколько минут нужно одной кошке, чтобы поймать одну мышку?", new string[]
           { "5 минут", "1 минута", "3 минуты", "1 час", "30 минут" }, 0));

            Questions.Add(new Question("Часы отбивают шесть ударов за тридцать секунд. Сколько времени часы будут отбивать двенадцать ударов?", new string[]
           { "0", "6", "50", "66", "65" }, 3));

            Questions.Add(new Question("Корова — 2, кошка — 3, овца — 2, кукушка — 4, петух — 8, собака — 3, осёл — ? ", new string[]
           { "1", "2", "3", "4", "5" }, 1));

            Questions.Add(new Question("Вы обогнали бегуна, занимающего вторую позицию. На какой позиции теперь находитесь Вы?", new string[]
           { "Первой", "Второй", "Последней", "Предпоследней", "Я не могу обогнать бегуна((" }, 1));

            Questions.Add(new Question("Горело 5 электрических лампочек, 3 лампочки выключили. Сколько лампочек осталось ? ", new string[]
           { "3", "2", "5", "0", "1" }, 2));

            Questions.Add(new Question("Сколько яиц можно съесть натощак?", new string[]
           { "2", "Много", "Очень много", "1", "Очень очень много" }, 2));

            Questions.Add(new Question("Сколько будет 2+2*2?", new string[]
           { "6", "8", "Цапля", "Часы", "Кнопка" }, 0));

            Questions.Add(new Question("Мужик пошел на базар и купил там лошадь за 50 рублей." +
                " Но вскоре он заметил, что лошади подорожали, и продал ее за 60 рублей. Потом он " +
                "сообразил, что ехать ему не на чем, и купил ту же лошадь за 70 рублей. Затем он задумался," +
                " как бы не получить от жены нагоняй за такую дорогую покупку, и продал ее за 80 руб. Что он" +
                " заработал в результате манипуляций?", new string[]
           { "10", "50", "0", "10", "20" }, 1));

            Questions.Add(new Question("Бизнесмен купил лошадь за 10$, продал ее за 20$ Потом он купил ту же" +
                " самую лошадь за 30$, а продал за 40$. Вопрос: какова суммарная прибыль бизнесмена от этих двух сделок?", new string[]
            { "20", "10", "0", "40", "50" }, 1));
        }

        public Boolean CheakAnswer(int CurrentQuestionNumber, int NumberAnswer)
        {
            if (Questions[CurrentQuestionNumber].CorrectAnswerNumber == NumberAnswer)
            {
                return true;
            }else
            {
                return false;
            }
        }
        public void ShuffleQuestion()
        {
            Random RND = new Random();
            for (int i = 0; i < Questions.Count; i++)
            {
                Question tmp = Questions[0];
                Questions.RemoveAt(0);
                Questions.Insert(RND.Next(Questions.Count), tmp);
            }
        }

    }
}